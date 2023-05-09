import Foundation

func solution(_ n:Int) -> Int {
    var sum : Int = 0
    var i : Int = 0
    for i in i ... n {
        if i % 2 == 0 {
            sum += i
        }
    }
    return sum
}