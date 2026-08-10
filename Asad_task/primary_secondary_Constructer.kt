fun main()
{
//  val animal_obj1 = Animal("Goat",2,"Blue")
//    println("Name is ${animal_obj1.name}")
//    println("Age is ${animal_obj1.age}")
//    println("   Color is ${animal_obj1.color}")
//    println()

  val animal_obj2 = Animal("Goat s",2)
}
class Animal(var name: String,var age: Int,var color: String)
{
//  val name: String=name
//    val age:Int=age
//    val color:String=color
    //Secondary Constructor
    constructor(name: String, age: Int):this(name,age,"blue")
{
        println("secondary constructor called")
    println("Age is ${age}")
    println("Name is ${name}")
    println("Color is ${color}")
    }



    init {
       println("Init block 1 ")
    }
    init {
        println("Init block 2")
    }
    init {
        println("Init block 3")
    }
}