# Bài 13
Hệ thống quản lý lịch thi học kỳ cho nhiều môn học, mỗi môn học có (có các thông tin: Mã môn học, Tên môn học) Lịch thi học kỳ bao gồm nhiều thông tin gồm: Mã ca thi, Mã môn học, Ngày thi, Giờ thi, Nhóm thi. Mã ca thi được đánh số từ T001, T002 và tự động tăng dần.

Cho danh sách các ca thi, mỗi môn học có nhiều ca thi, hãy thực hiện sắp xếp danh sách các ca thi theo thứ tự ưu tiên như sau: Ngày tăng dần, giờ tăng dần, mã môn học tăng dần.

**Input:** <br />
Dòng đầu tiên cho 2 số N, M lần lượt là số môn học và số ca thi. <br />
N*2 dòng tiếp theo là thông tin mã môn học và tên môn học. <br />
M dòng còn lại mỗi dòng là thông tin lịch thi bao gồm Mã môn học, ngày thi (dd/mm/yyyy) giờ thi (hh:mm) và nhóm thi (dạng xâu ký tự có 2 ký tự bất kỳ).

**Output:** <br />
Lịch thi đã sắp xếp như mẫu, mỗi lịch thi trên một dòng.

**Ví dụ:**
|Input|Output|
|:---|:---|
|2 10<br>INT1155<br>Tin hoc co so 2<br>INT1339<br>Ngon ngu lap trinh C++<br>INT1155 25/11/2021 08:00 01<br>INT1155 04/12/2021 08:00 02<br>INT1155 04/12/2021 13:30 03<br>INT1155 25/11/2021 13:30 04<br>INT1155 25/11/2021 15:00 05<br>INT1339 25/11/2021 08:00 01<br>INT1339 25/11/2021 08:00 02<br>INT1339 04/12/2021 13:30 03<br>INT1339 04/12/2021 13:30 04<br>INT1339 04/12/2021 15:00 05|T001 INT1155 Tin hoc co so 2 25/11/2021 08:00 01<br>T006 INT1339 Ngon ngu lap trinh C++ 25/11/2021 08:00 01<br>T007 INT1339 Ngon ngu lap trinh C++ 25/11/2021 08:00 02<br>T004 INT1155 Tin hoc co so 2 25/11/2021 13:30 04<br>T005 INT1155 TIn hoc co so 2 25/11/2021 15:00 05<br>T002 INT1155 TIn hoc co so 2 04/12/2021 08:00 02<br>T003 INT1155 TIn hoc co so 2 04/12/2021 13:30 03<br>T008 INT1339 Ngon ngu lap trinh C++ 04/12/2021 13:30 03<br>T009 INT1339 Ngon ngu lap trinh C++ 04/12/2021 13:30 04<br>T010 INT1339 Ngon ngu lap trinh C++ 04/12/2021 15:00 05<br><br><br><br><br><br>|
