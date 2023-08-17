fn main(){
	println!("Hello World!");
	println!("This is Ankit");
	let mut x: u32=4; // u32 -> Unsigned integer of 32 bit
	println!("x is: {}", x);
	{
		let x: u32=x-2;
		println!("x is: {}", x);
	}
	x+=1;
	println!("x is: {}", x);
	const SECONDS_IN_MINUTES: u32=60;
	println!("{}", SECONDS_IN_MINUTES);
}