use board::BoardPosition;
use board::BoardPosition::{NotOccupied, Occupied};

use crate::{board::Board, player::Player};

extern crate termcolor;

use std::io::Write;

use board::BoardPosition::{NotOccupied, Occupied};

use crate::player::Player;

use self::termcolor::{Color, ColorChoice, ColorSpec, StandardStream, WriteColor};


#[derive(Clone, Copy, Debug, PartialEq)]
pub enum Player {
    X,
    O,
}

impl Player {
    pub fn to_char(&self) -> char {
        if *self == Self::X {
            'X'
        } else {
            'O'
        }
    }
    pub fn print(&self) {
        let mut stdout = StandardStream::stdout(ColorChoice::Always);

        if *self == Player::X {
            stdout
                .set_color(ColorSpec::new().set_fg(Some(Color::Blue)))
                .unwrap();
        } else if *self == Player::O {
            stdout
                .set_color(ColorSpec::new().set_fg(Some(Color::Green)))
                .unwrap();
        }

        write!(&mut stdout, "{}", self.to_char()).unwrap();
        stdout.reset().unwrap();
    }
}

impl Player {
    pub fn switch(&mut self) {
        *self = if *self == Player::X {
            Player::O
        } else {
            Player::X
        };
    }
}


#[derive(Clone, Copy, Debug, PartialEq)]
pub enum BoardPosition {
    Occupied(Player),
    NotOccupied(u8),
}

#[derive(Clone, Copy, )]
pub struct Board {
    state: [BoardPosition; 9],
}


impl Board {
    pub fn new() -> Self {
        Board {
            state: [
                NotOccupied(1),
                NotOccupied(2),
                NotOccupied(3),
                NotOccupied(4),
                NotOccupied(5),
                NotOccupied(6),
                NotOccupied(7),
                NotOccupied(8),
                NotOccupied(9),
            ],
        }
    }
}



impl Board {
    pub fn draw(&self) {
        println!("\n");

        for i in (0..3).rev() {
            let offset = i * 3;

            print!("-------------\n| ");
            self.print(&self.state[offset]);
            print!(" | ");
            self.print(&self.state[offset + 1]);
            print!(" | ");
            self.print(&self.state[offset + 2]);
            println!(" |");
        }

        println!("-------------");
    }

    pub fn print(&self, state: &BoardPosition) {
        let mut stdout = StandardStream::stdout(ColorChoice::Always);

        match state {
            NotOccupied(position) => write!(&mut stdout, "{}", position).unwrap(),
            Occupied(player) => {
                let state = player.to_char();
                if state == 'X' {
                    stdout
                        .set_color(ColorSpec::new().set_fg(Some(Color::Blue)))
                        .unwrap();
                } else if state == 'O' {
                    stdout
                        .set_color(ColorSpec::new().set_fg(Some(Color::Green)))
                        .unwrap();
                }

                write!(&mut stdout, "{}", state).unwrap();
            }
        }

        stdout.reset().unwrap();
    }
}



pub struct Game {
    board: Board,
    current_player: Player,
}





impl Game {
    pub fn new(board: Board, player: Player) -> Self {
        Game { board, current_player: player }
    }
}


impl Game {
    pub fn gets_input_from_current_player(&mut self) {
        loop {
            print!("Player '");
            self.current_player.print();
            println!("', enter a number: ");

            let mut input = String::new();
            if std::io::stdin().read_line(&mut input).is_err() {
                println!("Couldn't read line! Try again.");
                continue;
            }

            if let Ok(number) = input.trim().parse::<usize>() {
                if number < 1 || number > 9 {
                    println!("The field number must be between 1 and 9.");
                    continue;
                }

                let number = number - 1;
                let mut state = self.board().state();
                match state[number] {
                    NotOccupied(_) => {}
                    Occupied(player) =>
                        if player == Player::X || player == Player::O {
                            print!("This field is already taken by '");
                            player.print();
                            println!("'.");
                            continue;
                        }
                }

                state[number] = Occupied(self.current_player);

                self.board.update_state(state);
                break;
            } else {
                println!("Only numbers are allowed.");
                continue;
            }
        }
    }
}



impl Game {
    pub fn is_won_by_any_player(&self) -> bool {
        let state = self.board().state();
        for board_position in 0..3 {
            if state[board_position] == state[board_position + 3] && state[board_position] == state[board_position + 6] {
                return true;
            }

            let board_position = board_position * 3;

            if state[board_position] == state[board_position + 1] && state[board_position] == state[board_position + 2] {
                return true;
            }
        }

        if (state[0] == state[4] && state[0] == state[8])
            || (state[2] == state[4] && state[2] == state[6])
        {
            return true;
        }

        false
    }
}




impl Game {
    pub fn is_over(&self) -> bool {
        self.board().state().iter().all(|&v| v == Occupied(Player::X) || v == Occupied(Player::O))
    }

    pub fn switch_player(&mut self) {
        self.current_player.switch();
    }
}


