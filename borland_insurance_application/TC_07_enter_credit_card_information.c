TC_07_enter_credit_card_information()
{
	lr_start_transaction("TC_07_enter_credit_card_information");

		lr_param_sprintf("P_fakeCreditCard", "4%04d 9876 5432 109%03d", rand() % 10000, rand() % 1000); 
	 	lr_param_sprintf("P_fakeExpiryDate", "%02d/%02d", rand() % 12 + 1, rand() % 10 + 21);
	 	
	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=Congratulations",
		LAST);

	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=You have purchased a new auto policy.  Welcome to the InsuranceCo family",
		LAST);

	web_submit_data("purchase_quote.jsf_3", 
		"Action=https://demo.borland.com/InsuranceWebExtJS/purchase_quote.jsf", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://demo.borland.com/InsuranceWebExtJS/quote_result.jsf", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=purchaseQuote", "Value=purchaseQuote", ENDITEM, 
		"Name=purchaseQuote:cardname", "Value={C_user_name}", ENDITEM, 
		"Name=purchaseQuote:cardnumber", "Value={P_fakeCreditCard}", ENDITEM, 
		"Name=purchaseQuote:expiration", "Value={P_fakeExpiryDate}", ENDITEM, 
		"Name=purchaseQuote:purchase.x", "Value=30", ENDITEM, 
		"Name=purchaseQuote:purchase.y", "Value=12", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id4:j_id9", ENDITEM, 
		LAST);
	
 	lr_think_time(think_time);
	lr_end_transaction("TC_07_enter_credit_card_information", LR_AUTO);
	return 0;
}
