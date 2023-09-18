func solution(_ phone_number:String) -> String {
    var count: Int = phone_number.count
    var answer: String = ""
    count = count - 4
    for _ in 0..<count {
        answer += "*"
    }
    return answer + phone_number.suffix(4)
}