fun main()
{

  //val obj2 = Rectangles()
  //obj2.draw()

  val arr= arrayOf(Rectangles(),Triangles())
    for (x in arr)
    {
        x.draw()
    }

}
abstract class Shapes
{
    abstract fun draw()
    abstract fun name()
    fun func1()
    {
        println("i am func1")
    }
}
class Rectangles : Shapes()
{
    override fun draw()
    {
        println("Drawing rectangle")
    }

    override fun name() {
        println("Class name Rectangle")
    }
}
class Triangles : Shapes()
{
    override fun draw()
    {
        println("Drawing triangle")
    }

    override fun name() {
        println("Class name Triangle")
    }
}
