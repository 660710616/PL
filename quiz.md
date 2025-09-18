# Quiz

4.เขียนโปรแกรมภาษา Ruby เพื่อแทรกเครื่องหมาย “-” ระหว่างตัวอักษรทุกตัวใน String ที่ผู้ใช้ได้ทำการป้อนเข้ามาป้อน โดยใช้เมธอด .insert()&#x20;

กำหนดให้

* รับอินพุต 1 บรรทัดเป็น String แทรก “-” ระหว่างตัวอักษรในสตริง เช่น "Ruby" -> "R-u-b-y"
* หากความยาวของ String เท่ากับ 0 หรือ 1 ให้แสดงผลตามเดิม

```ruby
input = gets.chomp

if input.length <= 1
  puts input
else
  i = input.length - 1
  while i > 0
    input.insert(i, "-")
    i -= 1
  end
  puts input
end

```

```c
#include <stdio.h>
#include <string.h>

void insertString(char *str, const char *insert, int index) {
    int lenStr = strlen(str);
    int lenInsert = strlen(insert);
    
    memmove(str + index + lenInsert, str + index, lenStr - index + 1);
    memcpy(str + index, insert, lenInsert);
}

int main() {
    char str[200];
    char insert[] = "-";

    scanf("%s", str);

    int len = strlen(str);
    if (len <= 1) {
        printf("%s\n", str);
        return 0;
    }

    for (int i = len - 1; i > 0; i--) {
        insertString(str, insert, i);
    }

    printf("%s\n", str);
    return 0;
}
```

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        scanner.close();

        StringBuffer str = new StringBuffer(input);

        if (str.length() > 1) {
            for (int i = str.length() - 1; i > 0; i--) {
                str.insert(i, "-");
            }
        }

        System.out.println(str.toString());
    }
}

```

```python
s = input("Enter a string: ")

if len(s) <= 1:
    print(s)
else:
    for i in range(len(s)-1, 0, -1):
        s = s[:i] + "-" + s[i:]
    print(s)

```
