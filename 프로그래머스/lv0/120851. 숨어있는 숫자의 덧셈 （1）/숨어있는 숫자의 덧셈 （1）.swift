import Foundation

func solution(_ my_string:String) -> Int {
    var a = Array(my_string)
    return a.compactMap { Int(String($0)) }.reduce(0, +)
}