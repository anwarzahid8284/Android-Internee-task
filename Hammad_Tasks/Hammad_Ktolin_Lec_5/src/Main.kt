//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
fun main() {
    // This Lecture is about the If Else

    val a=10
    val b=13

    if(a>b){

        println("A is Greater than B")
    }else if(a<b){
        println("A Less than B")
    }else{
        println("A is Equal to B")
    }

    // as an expression

    val x=20

    val result= if(x%2==0){
        "Even"
    }else{
        "Odd"
    }

    println(result)


    // In kotlin we have no ternary But  we use just like

    val z=13
    val out=if(z%2==0) "Evebn" else "Odd"

    println(out)
}