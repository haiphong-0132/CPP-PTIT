# CHUẨN HÓA ĐOẠN VĂN
Một câu trong văn bản được hiểu là dãy ký tự (có cả khoảng trống) cho đến khi gặp dấu ngắt câu hoặc xuống dòng (tức là đôi khi người ta quên viết dấu ngắt câu nhưng cứ xuống dòng là sang một câu mới). Các dấu ngắt câu trong bài toán này bao gồm: dấu chấm (.), dấu chấm cảm (!), dấu chấm hỏi (?).

Hãy viết chương trình chuẩn hóa các câu trong dữ liệu vào với các yêu cầu sau: <br />
* Ký tự đầu mỗi câu viết hoa, các ký tự khác viết thường.
* Các từ cách nhau đúng một khoảng trống.
* Tự động điền thêm dấu chấm (.) nếu xuống dòng mà chưa có dấu ngắt câu.
* Dấu ngắt câu phải viết sát ký tự cuối cùng của câu (không tính khoảng trống)
<!--->
  
**Input:** <br />
Một văn bản không quá 100 dòng.

**Output:** <br />
Ghi ra các câu đã chuẩn hóa, mỗi câu một dòng.

Ví dụ: <br />
|Input|Output|
|:---|:---|
|Chuong trinh Dao Tao CLC nganh CNTT duoc Thiet &emsp; Ke theo chuan quoc te.<br>co 03 chuyen nganh la: Cong &ensp; nghe phan mem,  Tri tue nhan tao va An toan thong tin<br>muc tieu cua chuong trinh la trang bi cho sinh vien cac ky nang nghe nghiep<br>moi &emsp;&emsp; CAC BAN danG ky &emsp;&emsp; thaM giA!|Chuong trinh dao tao clb nganh cntt duoc thiet ke theo chuan quoc te.<br>Co 03 chuyen nganh la: cong nghe phan mem, tri tue nhan tao va an toan thong tin.<br>Muc tieu cua chuong trinh la trang bi cho sinh vien cac ky nang nghe nghiep.<br>Moi cac ban dang ky tham gia!|
