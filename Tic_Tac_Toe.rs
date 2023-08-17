// 1. Create a player
// 2. Switch player method
// 3. Print player

fn main(){
	println!("Hello World!");
	let player = Player::X;
	player.switch_player();

}

#[derive(Clone, Copy, Debug, PartialEq)]

pub enum Player {
    X, O,
}

// impl -> implementation
// fn -> function
impl Player{
	fn switch_player(&mut self){
		if self == Player::X {
			self = Player::0;
		}
		else{
			self = Player::X;
		}
	}


}

// Method vs functions
/* 
Functions can be called from anywhere
unlike methods
*/ 