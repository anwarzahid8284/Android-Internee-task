//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
fun main() {
    val ar=arrayOf(1,2,3,4,5)

    val a: Int
    val b: Int
    val result: Int


    try {
        println("Enter Array index")
        val enterIndex=readLine()!!.toInt()

        println("Value at index ${enterIndex}  is ${ar[enterIndex]}")

        println("--------------------")


        println("Enter any number for arithmatic operation ")
        a=readLine()?.toIntOrNull()!!

        println("Enter second nomber ")
        b=readLine()!!.toInt()

        result=a/b

        println("The result is $result")

    }catch (e: ArrayIndexOutOfBoundsException){
        println("The give index is out of array ")
    }
    catch (ex: ArithmeticException){
        println(" a divided by b is not possible")
    }catch (ez: NullPointerException){
        println("Please enter any number not NULL ")
    }
    catch (ey: Exception){
        println("Dont enter Alphabatic")
    }


}