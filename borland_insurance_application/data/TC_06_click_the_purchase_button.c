TC_06_click_the_purchase_button()
{

	lr_think_time(5);

	web_submit_data("quote_result.jsf", 
		"Action=https://demo.borland.com/InsuranceWebExtJS/quote_result.jsf", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://demo.borland.com/InsuranceWebExtJS/quote_auto3.jsf", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=quote-result", "Value=quote-result", ENDITEM, 
		"Name=quote-result:purchase-quote.x", "Value=29", ENDITEM, 
		"Name=quote-result:purchase-quote.y", "Value=5", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id4:j_id8", ENDITEM, 
		LAST);

	return 0;
}
