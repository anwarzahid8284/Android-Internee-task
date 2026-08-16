fun main()
{
  val circle_Obj=Circle_()
    println(circle_Obj.area(4))

    var str="Madam"
    println(str.lowercase())

    println(str.paland("allah"))
}
class Circle_
{
    fun area(r:Int): Double
    {
       return 3.14 *r*r
    }
}
fun Circle_.parameter(u: Int): Double
{
    return 3.14 * u * 2
}

fun String.paland(st: String): String
{
    return st.uppercase()
}