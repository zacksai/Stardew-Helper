# Stardew Helper

---

## Alright so here's the idea:
- *Problem:* its annoying looking up gifts and items in Stardew
- *Solution:* pin a menu to your screen to easily find

### Issues:
- no idea how to pin a window to your screen
- no time to do anything but study

### Final Solutions:
- make this a studying opportunity
- learn how to pin thangs to the screen *if time allows*
    

---

## Concepts to Practice:

_Initializing Characters:_
   1. [ ] Pointers
   2. [ ] Dynamic Allocation
   3. [ ] Filestreams
   4. [ ] Vectors

_Initializing Farming Items:_
   1. [ ] Objects, Classes, Structs
   2. [ ] Inheritance, Polymorphism
   3. [ ] Constructors, Destructors, Operator Overloading

_Demo:_
   1. [ ] Deques, LinkedLists

---

## Demo Flow:

`Plant, Person, or Lookup?`

***Plant***

Select: *Spring // Summer // Fall // Winter*

Select: *Plant List* 

    Plant Name
        $   Seed Cost
        #   Crop Yield
        $   Sale Prices
        #   ROI

***Person***

Select: *Gift // Locate*

Gift:
    
    Person Name:
        ""  Loves
        ""  Likes


Locate:

Select: *Day & Rain*

    Person Name:
        #   Hours
        ""  Location


***Lookup***

Input: *name of item or person*

    Item/Person Name:
        [Display as above]



---

## Program Organization:


    item.cpp    
        Abstract class to contain all items
        - char*         name
        - char*         getName()
        - char*         display()
            
    crop.cpp : item.cpp
        Class to contain all crops
        - double        seedCost, ROI
        - int           yield
        - vector        salePrices

    gift.cpp : item.cpp
        Class to contain all giftable items
        - char*         name
        - bool          loved, liked

    character.cpp
        Class to contain all characters
        - char*         name
        - vector        loves, likes
    


