# BÀI 1
Email là viết tắt của cụm từ "electronic mail" - thư điện tử. Về cơ bản, email có nội dung như một bức thư thông thường, nhưng nó được gửi qua internet từ người gửi đến người nhận. Người gửi và người nhận bắt buộc phải có địa chỉ riêng (địa chỉ này là duy nhất) để tiến hành gửi và nhận thư. Một số người sử dụng trình duyệt web trong khi một số người khác sử dụng các chương trình có sẵn trên máy tính của họ để truy cập và lưu trữ thư điện tử. <br />
<br />
Một địa chỉ email có cấu trúc cơ bản gồm: xxx@yyy <br />
<br />
Phần đầu tiên của tất cả các địa chỉ email - "xxx" (trước ký hiệu "@") là tên riêng, tên thân mật, tên công ty,...- bất kỳ cái tên nào bạn có thể nghĩ ra. <br />
<br />
Ký hiệu "@" được sử dụng làm dải phân cách trong địa chỉ email. Nó là thành tố bắt buộc trong các địa chỉ email SMTP kể từ khi tin nhắn đầu tiên được gửi bởi Ray Tomlinson. <br />
<br />
Cuối cùng, "yyy" là tên miền mà người dùng đang sử dụng. Tại Việt Nam, tên miền phổ biến nhất là "gmail.com". <br />
<br />
Có một số quy tắc mà một địa chỉ email phải tuân theo, cụ thể như sau: <br />
* Tên người dùng không thể dài hơn 64 ký tự và tên miền không thể dài hơn 254 ký tự, tên miền phải có dấu "." và tên định danh, ví dụ gmail.com.<br />
* Một địa chỉ email chỉ được phép chứa một ký tự "@".<br />
* Một địa chỉ email hợp lệ không được chứa dấu cách, chỉ chứa các ký tự từ A-Z, a-z, 0-9 và các dấu ".", "_".
<a/>
Hãy kiểm tra các địa chỉ email trong danh sách có hợp lệ hay không. Nếu có in ra YES, ngược lại in ra NO. <br /> <br />

**Input:** <br />
Dòng đầu tiên cho số N là tổng số các địa chỉ email cần kiểm tra.<br />
N dòng tiếp theo, mỗi dòng là một xâu ký tự bất kỳ có độ dài tối đa 1000 ký tự. <br />
<br />
**Output:** <br />
In ra kết quả kiểm tra email hợp lệ hay không tương ứng trên một dòng.<br />
<br />
| Input | Output |
|:---   |:---    |
|2	|YES	 |
|code@ptit.edu.vn	|NO	|
|ptit@ptit		|	  |
