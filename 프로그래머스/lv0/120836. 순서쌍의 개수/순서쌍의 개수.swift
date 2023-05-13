import Foundation

func solution(_ n:Int) -> Int {
    var a: Int = (1...n).filter {
        n % $0 == 0
    }.count
    return a
}