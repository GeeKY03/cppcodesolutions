use std::io::{self, Write};

fn main() {
    println!("Welcome to Tic Tac Toe!");

    let mut board = vec![' '; 9];
    let mut player = 'X';

    loop {
        // Print board
        print_board(&board);

        // Get input from player
        let input = get_input(player);

        // Check if move is valid
        if !is_valid_move(&board, input) {
            println!("Invalid move, try again!");
            continue;
        }

        // Update board
        board[input] = player;

        // Check if game is over
        if is_game_over(&board) {
            print_board(&board);
            println!("Game over! {} wins!", player);
            break;
        }

        // Switch players
        player = if player == 'X' { 'O' } else { 'X' };
    }
}

fn print_board(board: &Vec<char>) {
    println!(" {} | {} | {}", board[0], board[1], board[2]);
    println!("-----------");
    println!(" {} | {} | {}", board[3], board[4], board[5]);
    println!("-----------");
    println!(" {} | {} | {}", board[6], board[7], board[8]);
}

fn get_input(player: char) -> usize {
    loop {
        print!("Player {}: Enter a number (1-9): ", player);
        io::stdout().flush().unwrap();

        let mut input = String::new();
        io::stdin().read_line(&mut input).unwrap();

        match input.trim().parse() {
            Ok(num) if num >= 1 && num <= 9 => return num - 1,
            _ => println!("Invalid input, try again!"),
        }
    }
}

fn is_valid_move(board: &Vec<char>, input: usize) -> bool {
    board[input] == ' '
}

fn is_game_over(board: &Vec<char>) -> bool {
    is_winner(board, 'X') || is_winner(board, 'O') || board.iter().all(|&x| x != ' ')
}

fn is_winner(board: &Vec<char>, player: char) -> bool {
    (0..3).any(|i| {
        (0..3).all(|j| board[i * 3 + j] == player) ||
        (0..3).all(|j| board[j * 3 + i] == player) ||
        (0..3).all(|j| board[j * 3 + j] == player) ||
        (0..3).all(|j| board[j * 3 + 2 - j] == player)
    })
}
