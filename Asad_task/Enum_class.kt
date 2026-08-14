fun main()
{
  var east=Enum_class.South
    println(east.number)

    //east.directionName()

    for (i in Enum_class.entries)
    {
        println("Insex No: ${i.ordinal} , Name: ${i.name}")
        //println("And Name: ${i.directionName()}")
    }

}
enum class Enum_class(var number: Int)
{
    East(2),
    West(4),
    North(16),
    South(144);

    fun directionName()
    {
        println("Direction Name: $this")
    }
}