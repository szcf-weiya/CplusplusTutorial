# chap 5

## nested friends

1. declare (without defining) the nested structure
2. declare it as a friend
3. define the structure

## access specifiers
All of the access specification information disappears before the program is run; generally this happens during compilation.

## differences 
 It’s identical to the struct keyword in absolutely every way except one: class defaults to private, whereas struct defaults to public. 
 
 
# chap 15

All the examples you’ve seen here, and virtually all the examples you should see, pass addresses and not values. This is because addresses all have the same size. This is because addresses all have the same size, so passing the address of an object of a derived type (which is usually a bigger object) is the same as passing the address of an object of the base type (which is usually a smaller object).
