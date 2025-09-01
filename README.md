---
description: การแทรกข้อความเพิ่มลงใน string ในภาษา Ruby
---

# Inserting Text Into a Ruby String

การแทรกข้อความเพิ่มลงใน string ในภาษา Ruby

**ในภาษา Ruby สามารถแทรกข้อความเพิ่มได้โดยการใช้ method ที่ชื่อว่า "insert"**

method insert เป็น method ของคลาส String ในภาษา Ruby ซึ่งใช้สำหรับแทรกข้อความใหม่ลงใน string ตรงตำแหน่งที่ต้องการ

## Syntax

```ruby
str.insert(index, other_str) 
```

<kbd>str</kbd> คือ string เดิม&#x20;

<kbd>index</kbd>  คือ ตำแหน่งที่ต้องการจะแทรก&#x20;

&#x20;      แบ่งออกเป็น 2 กรณี&#x20;

&#x20;            \- <kbd>index</kbd> เป็น **จำนวนเต็มบวก** จะเริ่มแทรกจากด้านหน้าของ string&#x20;

&#x20;            \- <kbd>index</kbd> เป็น **จำนวนเต็มลบ** จะนับตำแหน่งถอยหลังจากด้านท้ายของ string&#x20;

<kbd>other\_str</kbd> คือ ข้อความที่ต้องการจะแทรกเข้าไป&#x20;

## Example

**Example 1 :** กรณี index เป็น**จำนวนเต็มบวก**&#x20;

```ruby
str = "Helloworld" 
str.insert(5, "my") 
```

**Output :**&#x20;

```ruby
Hellomyworld 
```

**Example 2 :** กรณี index เป็น**จำนวนเต็มลบ**

```ruby
str = "Helloworld" 
str.insert(-2, "my") 
```

**Output :**&#x20;

```ruby
Hellowormyld  
```

***

## เปรียบเทียบกับภาษา C / Java / Python

## ภาษา C

ภาษา C ไม่มี method insert โดยตรงจึงต้องสร้าง method ในการแทรกข้อความขึ้นเอง

**Example :**

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
    char str[50] = "Helloworld";
    char insert[] = "my";
    int index = 5;

    insertString(str, insert, index);
    printf("%s\n", str);

    return 0;
}

```

**Output :**&#x20;

```c
Hellomyworld
```

## ภาษา Java

เนื่องจาก String ในภาษา Java **ไม่สามารถเปลี่ยนค่าได้โดยตรง** จึงต้องใช้method insert() ของ class <kbd>StringBuffer</kbd>  ใน Java ซึ่งเป็นคลาสที่ใช้จัดการกับ String ที่สามารถแก้ไขได้โดยไม่จำเป็นต้องสร้าง object ใหม่ทุกครั้ง

**Syntax**

```java
StringBuffer.insert(int Position, String str)
```

&#x20;**Example:**

```java
public class Main {
    public static void main(String[] args) {
        StringBuffer str = new StringBuffer("Helloworld");
        str.insert(5, "my");
        System.out.println(str);
    }
}
```

**Output :**&#x20;

```java
Hellomyworld 
```

## ภาษา Python

เนื่องจาก String ในภาษา  Python **ไม่สามารถเปลี่ยนค่าได้โดยตรง ไม่มี method insert() เหมือนกับ Ruby** แต่สามารถทำได้โดยการตัด string แล้วต่อกลับเข้าด้วยกัน

**Syntax**

```java
new_str = str[:index] + insert_text + str[index:]
```

<kbd>str\[:index]</kbd> คือ การตัด string **ตั้งแต่ตัวแรก ถึง ตำแหน่งก่อนหน้า index** (\* ไม่รวมตำแหน่ง index)\
<kbd>insert\_text</kbd> คือ ข้อความที่ต้องการแทรกเข้าไปใน string

<kbd>str\[index:]</kbd> คือ การตัดstring **ตั้งแต่ตำแหน่ง index ถึง ตัวสุดท้าย**

**Example:**

```python
str = "Helloworld"
index = 5
insert_text = "my"

new_str = str[:index] + insert_text + str[index:]
print(new_str) 
```

**Output :**&#x20;

```python
Hellomyworld 
```

