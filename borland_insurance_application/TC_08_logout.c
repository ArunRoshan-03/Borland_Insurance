TC_08_logout()
{
	lr_start_transaction("TC_08_logout");


	web_url("index.jsf_4", 
		"URL=https://demo.borland.com/InsuranceWebExtJS/index.jsf", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demo.borland.com/InsuranceWebExtJS/purchase_quote.jsf", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_form("index.jsf_5",
		"Ordinal=2",
		"Snapshot=t79.inf",
		ITEMDATA,
		LAST);

	lr_think_time(think_time);
	lr_end_transaction("TC_08_logout", LR_AUTO);
	return 0;
}