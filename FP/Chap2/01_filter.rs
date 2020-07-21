fn main() {
    let a = vec![1f64,2f64,3f64,4f64];
    println!("{:?}", filter(a.into_iter(), Box::new(|x| (x as isize) % 2 == 0)));
}

fn filter_helper<T: Iterator<Item=f64>, F: Fn(f64) -> bool>(mut x: T, f: Box<F>, prev: &mut Vec<f64>) -> Vec<f64> {
    match x.next() {
        Some(head) => {
            if f(head) {
                prev.push(head);
            }
            filter_helper(x, f, prev)
        }
        None => {
            prev.to_vec()
        }
    }
}

fn filter<T: Iterator<Item=f64>, F: Fn(f64) -> bool>(x: T, f: Box<F>) -> Vec<f64> {
    let mut v = vec![];
    filter_helper(x, f, &mut v)
}
