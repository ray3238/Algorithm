func solution(_ x:Int, _ n:Int) -> [Int64] {
    var b: [Int64] = []
    for i in 1...n {
        b.append(Int64(x*i))
    }
    return b
}
