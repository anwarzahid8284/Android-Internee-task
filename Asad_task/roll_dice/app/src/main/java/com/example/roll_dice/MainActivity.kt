package com.example.roll_dice

import android.annotation.SuppressLint
import android.content.Context
import android.os.Bundle
import android.widget.Button
import android.widget.ImageView
import android.widget.TextView
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import org.w3c.dom.Text
import kotlin.random.Random

class MainActivity : AppCompatActivity() {
    lateinit var diceImage : ImageView
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        var rollButton : Button =findViewById(R.id.roll_button)
        rollButton.setOnClickListener {
            rollDice()
        }
        diceImage=findViewById(R.id.dice_imageID)
        }

    @SuppressLint("SetTextI18n")
    fun rollDice() {
        var randomNo = Random.nextInt(6) +1
        var drawableResourse = when(randomNo)
        {
            1 -> R.drawable.dice_1
            2 ->R.drawable.dice_2
            3 -> R.drawable.dice_3
            4 -> R.drawable.dice_4
            5 -> R.drawable.dice_5
            else -> R.drawable.dice_6
        }
        diceImage.setImageResource(drawableResourse)
    }
}
