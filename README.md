---
description: การแทรกข้อความเพิ่มลงใน string ในภาษา Ruby
---

# Inserting Text Into a Ruby String

การแทรกข้อความเพิ่มลงใน string ในภาษา Ruby

**ในภาษา Ruby สามารถแทรกข้อความเพิ่มได้โดยการใช้ method ที่ชื่อว่า "insert"**

เมธอด insert เป็นเมธอดของคลาส String ในภาษา Ruby ซึ่งใช้สำหรับแทรกข้อความใหม่ลงใน string ตรงตำแหน่งที่เราต้องการ

## Syntax

```ruby
str.insert(index, other_str) 
```

<kbd>str</kbd> คือ string เดิม&#x20;

<kbd>index</kbd>  คือ ตำแหน่งที่ต้องการจะแทรก&#x20;

&#x20;      แบ่งออกเป็น 2 กรณี&#x20;

&#x20;            \- <kbd>index</kbd> เป็น จำนวนเต็มบวก จะเริ่มแทรกจากด้านหน้าของ string&#x20;

&#x20;            \- <kbd>index</kbd> เป็น จำนวนเต็มลบ : จะนับตำแหน่งถอยหลังจากด้านท้ายของ string&#x20;

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

