# Bài 5
Passcode có thể hiểu là một chuỗi các ký tự (số hoặc chữ) được sử dụng để cài đặt cho máy tính bảng làm mật khẩu truy cập khi mở máy. Hầu hết những thiết bị iOS hiện nay đều được trang bị loại mã này. Passcode sẽ giúp cho chủ nhân của thiết bị bảo mật bằng những thông tin ở trên máy, và nếu như có ai đó muốn sử dụng iPad thì phải được sự đồng ý của chủ nhân nó.

Đối với dạng passcode đơn giản (Chỉ bao gồm 4-6 chữ số). Để lưu trữ passcode mở khóa một cách an toàn, tránh bị đọc bởi một chương trình bên thứ ba, passcode được mã hóa và lưu trữ theo quy tắc sau:
<p align="center">0-A, 1-B, 2-C,..., 9-J<br>Hoặc 0-K, 1-L,..., 9-T</p>
Các chữ số được mã hóa thành dạng ký tự sau đó chèn thêm các chữ số khác để làm rối.

Cho một passcode và một đoàn passcode đã được mã hóa. Hãy kiểm tra xem passcode đó có khớp với chuỗi đã được mã hóa không. Nếu có in ra YES, ngược lại in ra NO.

**Input:** <br />
Dòng đầu tiên cho số N là số passcode cần kiểm tra. <br />
N dòng tiếp theo bao gồm passcode cần kiểm tra và passcode đã mã hóa (cách nhau bởi một khoảng trống). <br />

**Output:** <br />
Ví dụ:
|Input|Output|
|:---|:---|
|3<br>1234 234DFAA4592<br>1234 234BC2DE4592<br>126152 35345AGDGKG|NO<br>YES<br>NO<br><br>|
