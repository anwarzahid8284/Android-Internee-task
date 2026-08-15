
fun main()
{
    //val obj=Person_("stud")                 is line se error ayega q k class ka constr private hai
  var person1=Person_.create("student")
    person1.print()
    println()

  var person2=Person_.create("teacher")
  person2.print()
    println()

  var else_obj=Person_.create("unknown")
    else_obj.print()
}
class Person_ private constructor(var type: String)
{
  companion object factory
  {
      fun create(type: String): Person_
      {
       return when(type)
       {
           "student" -> Person_("student")
           "teacher" -> Person_("teacher")
           else -> Person_("By default")
       }
      }

      var name="Factory Object"
  }

    fun print()
    {
        println("I am print function of Person class")
        println("person class constructor value:  ${type}")
    }

}