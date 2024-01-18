---------------------------------------------------------------------------------------------------

Cho một dãy số nguyên gồm n phần tử a_{i} (n\leq 10^{5},|a_{i}|\leq 10^{9}) được sắp xếp không giảm. Hãy in ra hai vị trí thuộc dãy a sao cho tổng của hai phần tử ở vị trí đó bằng số nguyên k cho trước. Nếu không có hai vị trí nào thỏa mãn in ra “-1 -1”.

Ví dụ:
Input                             |  Output
7 10                              |  3 6
1 1 2 4 7 8 11                    |

Giải thích: Phần tử ở vị trí thứ 3 là 2 và phần tử ở vị trí thứ 6 là 8, tổng của chúng là 10

---------------------------------------------------------------------------------------------------

Nhận xét
- Ta thấy rằng a_{6}+a_{0}=12>k mà a_{6}>a_{5}>a_{4}>a_{3}>a_{2}>a_{1}>a_{0} do đó a_{6}+a_{5}>a_{6}+a_{4}>a_{6}+a_{3}>a_{6}+a_{2}>a_{6}+a_{1}>a_{6}+a_{0}>k. Có nghĩa là a_{6} cộng với bất cứ phần tử nào cũng lớn hơn k. Do vậy, a_{6} sẽ không bao giờ là một phần tử được chọn nên ta sẽ không xét a_{6} nữa mà sẽ xét a_{5}.
- Lại có a_{0}+a_{5} = 9 < k = 10. Tương tự lập luận bên trên thì k>a_{0}+a_{5}>a_{0}+a_{4}>a_{0}+a_{3}>a_{0}+a_{2}>a_{0}+a_{1}. Có nghĩa là a_{0} cộng với bất cứ phần tử nào cũng nhỏ hơn k. Do vậy, a_{0} sẽ không bao giờ là một phần tử được chọn nên ta sẽ không xét a_{0} nữa mà sẽ xét a_{1}.

---------------------------------------------------------------------------------------------------

Lời giải
Từ các nhận xét trên ta có lời giải sau:

Ta có hai con trỏ i và j, i ở đầu mảng và j ở cuối mảng
Ta tiến hành quá trình sau đến khi hai con trỏ gặp nhau, có nghĩa là đến khi i=j
Nếu tổng hai phần tử ở vị trí i và j là k thì in ra kết quả và kết thúc quá trình
Nếu tổng hai phần tử ở vị trí i và j nhỏ hơn k thì tăng i lên 1 đơn vị
Nếu tổng hai phần tử ở vị trí i và j lớn hơn k thì giảm j đi 1 đơn vị
Khi hai con trỏ gặp nhau có nghĩa là không có hai phần tử nào thỏa mãn và in ra  “-1 -1”

---------------------------------------------------------------------------------------------------