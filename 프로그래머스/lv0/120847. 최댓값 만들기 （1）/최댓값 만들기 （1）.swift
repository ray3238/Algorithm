import Foundation

func solution(_ numbers:[Int]) -> Int {
    var a = numbers.sorted()
    return a[numbers.count-2] * a[numbers.count-1]
}