import Foundation

func solution(_ sides:[Int]) -> Int {
    var a: [Int] = sides
    a.sort()
    return a[0] + a[1] > a[2] ? 1 : 2
}
