# Bài 3
Trên hệ thống phim của một website có các thông tin bộ phim bao gồm: Mã phim, Tên phim, Ngày khởi chiếu, Số tập phim, Thể loại. Mã phim được đánh số tự động từ P001, P002 và tự động tăng dần. Thể loại phim bao gồm thông tin Mã thể loại và Tên thể loại. Mã thể loại được đánh số tự động tăng dần từ TL001, TL002. <br />

Cho danh sách các phim trên hệ thống, hãy thực hiện sắp xếp danh sách các bộ phim theo thứ tự ưu tiên ngày khởi chiếu tăng dần, tên phim sắp xếp theo thứ tự từ điển, số tập phim giảm dần. <br />

**Input:** <br />
Dòng đầu tiên cho 2 số N, M lần lượt là số lượng thể loại và số lượng bộ phim. <br />
N dòng tiếp theo là thông tin tên thể loại. Mã thể loại tự động sinh theo thứ tự nhập vào.
M dòng còn lại mỗi dòng là thông tin phim bao gồm Mã thể loại, ngày khởi chiếu (đd/mm/yyyy) tên phim và số tập phim (số nguyên tối đa 10000). <br />

**Output:** <br />
Danh sách phim đã sắp xếp như mẫu, mỗi phim trên một dòng. <br />

Ví dụ: <br />

|Input     |Output                               |
|:---      |:---                                 |
|2 3       |P001 Hai huoc 25/11/2021 Phim so 1 10|
|Hai huoc  |P003 Hai huoc 25/11/2021 Phim so 3 5|
|Tinh cam  |P002 Hai huoc 04/12/2021 Phim so 2 15|
|TL001     |
|25/11/2021|
|Phim so 1|
|10|
|TL001|
|04/12/2021|
|Phim so 2|
|15|
|TL002|
|25/11/2021|
|Phim so 3|
|5|
