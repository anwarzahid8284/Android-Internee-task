class Person(var name: String, var age: Int, var gender: String, var occupation: String)
{
//    var name : String = "Burhan"
//    var age : Int = 19
//    var gender : String = "Male"
//    var occupation : String = "Developer"

    fun work()
    {
        println("My name is $name occupation $occupation")
    }

    fun getAge()
    {
        println("My age is $age")
    }

    fun getGender()
    {
        println("My gender is $gender")
    }
}

fun main()
{
//    var person = Person()
//    person.work()
//    person.getAge()
//    person.getGender()
//    println()
//    println("My name is ${person.name}")


    //with parameter
    var person_1_obj=Person("Ali", 28, "Male","Developer")
    println("Person 1:  ${person_1_obj.name}")
    println("Person 1 gender:  ${person_1_obj.gender}")
    person_1_obj.getGender()
    person_1_obj.getAge()
    person_1_obj.work()

    var person_2_obj=Person("Waqar", 38, "Male","YouTuber")
    println("Person 2:  ${person_2_obj.name}")
    println("Person 2 gender:  ${person_2_obj.gender}")
    person_2_obj.getGender()
    person_2_obj.getAge()
    person_2_obj.work()
}