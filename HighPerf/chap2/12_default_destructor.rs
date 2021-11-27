use std::ptr;
use std::fmt::Debug;

fn main() {
    let p1 = Point { x: 1, y: 2};
    let mut p2 = Point { x: 0, y: 0 };
    unsafe {
        copy(&p1, &mut p2);
    }
    println!("{:?}", p2);
}

#[derive(Debug)]
struct Point {
    x: i64,
    y: i64,
}

unsafe fn copy(src: &Point, dst: &mut Point) {
    ptr::copy(src, dst, 2)
}
