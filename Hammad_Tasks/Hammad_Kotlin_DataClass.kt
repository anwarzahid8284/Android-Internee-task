data class  user(val name:String, var age: Int,var Grade: String)

class  student(val nameOfStudent: String,var ageOfStudent: Int){

}

fun main(){

    // see deference simple Class and data class

    var s1=student("xyz",34)

    println(s1) // its give garbage values

    val us1=user("Ali",25,"B")

    val us2=user("Ali",25,"B")

    println("-----------------------")

    var us3=us2.copy()  // use of copy fun of the dataClass

    println(us3)

    println(us1)

    // To apply toString() function of dataClass

    println("----------------------")

    println(us1.toString())

    println("--------------------------")

    // to apply equal() function of dataClass

    println(us1.equals(us2))

    println("-----------------------")

    println(us1.hashCode()) // its basically give identifier of the given object

    println("--------------------------")

    // use of  componentN() fun of the dataClass

    println(us2.component1())
    println(us2.component3())

}