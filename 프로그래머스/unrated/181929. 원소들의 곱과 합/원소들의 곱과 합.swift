import Foundation

func solution(_ num_list:[Int]) -> Int {
    var num1: Int = 1
    var num2: Int = 0
    for i in num_list {
        num1 *= i
        num2 += i
    }
    return num1 < num2*num2 ? 1 : 0
}