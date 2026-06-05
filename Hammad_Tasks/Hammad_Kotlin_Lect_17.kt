import java.awt.Stroke
import java.lang.reflect.Type

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
fun main() {
    val  oneols=onePlus("one plus pere")
    oneols.disp()
    oneols.mkecll()
    println(oneols.toString())

    /*
    ANY ke paas kya kuch hai?
Kew ke har class Any ki bachi hai, isliye Any ke paas jo bhi khoobiyan (methods) hain, wo Kotlin ki har ek class ko muft mein mil jati hain. Any ke paas sirf 3 main functions hote hain:

toString(): Ye kisi bhi object ko text (String) mein badalne ke kaam aata hai (jaise print karwane ke liye).

equals(): Ye check karne ke kaam aata hai ke kya do objects aapas mein barabar hain ya nahi (==).

hashCode(): Ye object ka ek unique number (ID) nikalta hai jo memory mein usko pehchanne ke kaam aata hai.
*/



    val mobilee=mobile("mobilePeremetter")
    mobilee.mkecll()
    mobilee.disp()
}

open  class mobile(val type: String){
  open  val name: String=""
   open val ge: Int=5
   open fun mkecll()=println("Cll fun")
    fun powerOff()=println("power off fun")

    open fun disp()=println("mobile dis")

    }

class onePlus(val onepere: String) :mobile(onepere){

    val one=onepere

    override val name: String="Neme One Plus"

    override val ge: Int=7

    override fun mkecll(){
        super.mkecll()
        println("pehle super cll howe then i one pls fun")
    }
    override fun disp()=println("onePlus disp onepere is : $one")

    override fun toString(): String {
        return "name is $name - age is $ge"
    }
}