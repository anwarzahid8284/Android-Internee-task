interface Update{
    fun update()
}
interface Remote{
    fun powerOn() // this will become an abstract method

    fun brand(){
        println("Generic Brand")
    }

    val model:String // this will become an abstract

    val BetteryType:String
        get()="EnterLink"
}

class TVRemote:Remote,Update{
    override fun powerOn(){
        println("Tv is On")
    }

    override val model:String="TV_34"
    // 2nd interface have update method so will mi must define it

    override fun update(){
        println("This is TV update Version")
    }

}

class ACRemote:Remote , Update{
    override fun powerOn(){
        println("AC is On")
    }
    override val model:String="AC_455"

    override fun update(){
        println("This is AC update Version")
    }

}
fun main(){
    val tvR=TVRemote()
    tvR.powerOn()
    tvR.brand()
    tvR.update()

    println(tvR.model)
    println(tvR.BetteryType)
    println("____________________________________")

    val acR:Remote=ACRemote()
    acR.powerOn()
    acR.brand()
    // acR.update() -> the update showing an error because
    // this obj has only Remote properties
    println(acR.model)
    println(acR.BetteryType)
}