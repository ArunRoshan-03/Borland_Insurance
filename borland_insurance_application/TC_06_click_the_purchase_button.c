TC_06_click_the_purchase_button()
{
	
	lr_start_transaction("TC_06_click_the_purchase_button");
	
	web_reg_save_param_ex(
		"ParamName=C_user_name",
		"LB=label>",
		"RB=                   ",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/quote_result.jsf",
		LAST);

	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=Credit Card Information ",
		LAST);

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

	lr_think_time(think_time);
	lr_end_transaction("TC_06_click_the_purchase_button", LR_AUTO);
	return 0;
}
