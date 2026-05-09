//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
fun main() {
    // fun will be store in a variable like

    var Fun :(Int, Int) -> Int //int,int show parameters and Int in last show return type  of fun
    Fun =::add

    println("Two Number addition : ${Fun(4,4,)}")

    var ThreeNuAdd : (Int, Int, Int) -> Int =::add

    println("Three Number addition fun : ${ThreeNuAdd(5,6,7,)}")

}

fun add(a: Int,b: Int) : Int{
    return a+b
}

fun add(x: Double,y: Int): Double{
    return x+y
}

fun add(m: Int,n: Int,p: Int): Int{
    return m+n+p
}