fun main()
{
    obj_2.get()
    println("Age is ${obj_1.age}")

    //Anonymous Object
    var obj_3 = object:inter_face {
        override fun type() {
            println("This is anonymous object")
        }


        var name="obj_3"

        fun get()
        {
            println("Name: ${name}")
        }

        var age:Int=55
    }
    println()
    obj_3.get()
    println("Age is ${obj_3.age}")
    obj_3.type()
}

object obj_2
{
    var name="obj_2"

    fun get()
    {
        println("Object name is ${obj_1.name}")
    }

    var age:Int=33
}

//interface
interface inter_face
{
    fun type()
}