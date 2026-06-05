//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
fun main() {


    val  shapes: Array<shape> =arrayOf(circle(2.0),square(2.0),Triangle(3.4))

    calculateArea(shapes)
}

fun  calculateArea(shapes: Array<shape>){
    for (i in shapes){
        println(i.area())
    }
}

open  class  shape{
  open  fun area() : Double{
        return 0.0
    }
}

class  circle(val redius : Double) :shape(){
    override fun area(): Double {
        return Math.PI *redius * redius
    }
}

class square(val side : Double) : shape(){
    override fun area(): Double {
        return side*side
    }
}
class Triangle(val valueForTriangle: Double) : shape(){
    override fun area(): Double {
        return valueForTriangle*valueForTriangle*valueForTriangle
    }
}