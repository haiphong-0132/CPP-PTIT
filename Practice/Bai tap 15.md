# Bài 15
Ngân hàng TechcomBank có chương trình ưu đãi đặc biệt dành cho khách hàng có chi tiêu từ 100 triệu một tháng trở lên. Hãy giúp ngân hàng lọc danh sách các khách hàng đủ điều kiện nhận ưu đãi.

**Input:** <br />
Dòng đầu tiên đưa vào số lượng bộ test T. <br />
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm 3 dòng, dòng thứ nhất là họ tên khách hàng (S). Dòng thứ hai số nguyên T là số lượt giao dịch. Dòng thứ 3 gồm giá trị các giao dịch T<sub>i</sub>. Giao dịch có giá trị âm là số tiền chi tiêu, giao dịch có giá trị dương là số tiền nhận vào. <br />
T, S thỏa mãn ràng buộc: $1 \leqslant$ T $\leqslant 100$; $1 \leqslant$ Length(S) $\leqslant 100$ <br />
T, T<sub>i</sub> thỏa mãn ràng buộc T $\leq 10^4$, $-10^9 \leq$ T<sub>i</sub> $\leq 10^9$

**Output:** <br />
Đưa ra kết quả khách hàng có thuộc diện ưu đãi không, nếu có in ra YES, nếu không in ra NO. <br />

|Input|Output|
|:---|:---|
|1<br>Nguyen Van Nam<br>6<br>100000 5000000 -1000000 -2000000 -10000|NO<br><br><br><br><br>|
