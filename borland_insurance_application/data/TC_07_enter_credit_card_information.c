TC_07_enter_credit_card_information()
{

	lr_think_time(18);

	web_submit_data("purchase_quote.jsf_3", 
		"Action=https://demo.borland.com/InsuranceWebExtJS/purchase_quote.jsf", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://demo.borland.com/InsuranceWebExtJS/quote_result.jsf", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=purchaseQuote", "Value=purchaseQuote", ENDITEM, 
		"Name=purchaseQuote:cardname", "Value=Arun Roshan", ENDITEM, 
		"Name=purchaseQuote:cardnumber", "Value=1294 4863 2356 3975", ENDITEM, 
		"Name=purchaseQuote:expiration", "Value=02/09", ENDITEM, 
		"Name=purchaseQuote:purchase.x", "Value=30", ENDITEM, 
		"Name=purchaseQuote:purchase.y", "Value=12", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id4:j_id9", ENDITEM, 
		LAST);

	return 0;
}
