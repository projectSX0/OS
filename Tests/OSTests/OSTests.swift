import XCTest
@testable import OS

class OSTests: XCTestCase {
    func testExample() {
        // This is an example of a functional test case.
        // Use XCTAssert and related functions to verify your tests produce the correct results.
        XCTAssertEqual(OS().text, "Hello, World!")
    }


    static var allTests : [(String, (OSTests) -> () throws -> Void)] {
        return [
            ("testExample", testExample),
        ]
    }
}
