fn main() {
    let vec = vec![1, 2, 3, 4, 5]; // Memory allocated on the heap
    println!("Vector: {:?}", vec);
    // Rust automatically frees memory when the vector goes out of scope
}