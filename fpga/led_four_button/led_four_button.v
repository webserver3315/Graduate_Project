module led_four_button
		(
			input btn1, btn2, btn3, btn4,
			output led1, led2, led3, led4
		);
	assign led1 = ~btn1;
	assign led2 = ~btn2;
	assign led3 = btn3;
	assign led4 = btn4;
	
endmodule