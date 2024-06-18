//functions used in busben module (notes pages) - could be applied to other modules or used in template - 24-07-2003 CF

function goloc(aloc)
{
	//used by unit selector dropdown box
	i = aloc.selectedIndex;
	if (aloc.selectedIndex > 0)
	{
		if (aloc[i].value != "")
		{
			//open selected URL
			location.href=(aloc[i].value);
		}
		else
		{
			//reset default selection (if no url is given - i.e. a horizontal dividers is selected)
			aloc.selectedIndex=0;
		}
	}
}

function show_image (image, new_image)
{
	image.src = new_image;
}

function goURL(theURL) 
{
	alert('Thankyou for your comments, your submission has been registered. Now please attempt the self assessment questions'); window.location.href=(theURL); 
}

var ns4
var ie4

function detect_browser(){
	ns4=(document.layers)?true:false
	ie4=(document.all)?true:false
}

function showObject(obj) {
	if (ie4)
	{
		obj.style.visibility = "visible"
	}
	else if (ns4)
	{
		obj.visibility = "show"
	}
}


function hideObject(obj) {
	if (ie4)
	{
		obj.style.visibility = "hidden"
	}
	else if (ns4)
	{
		obj.visibility = "hide"
	}
}

function check_order1(form)

{
	form.response.value="Incorrect";

	if (form.input1.value=="1")

	{
		if (form.input2.value=="4")

		{
			if (form.input3.value=="3")

			{
				if (form.input4.value=="2")

				{
					form.response.value="Correct";

				}
			}
		}
	}
}


function check_order2(form)

{
	form.response2.value="Incorrect";

	if (form.inputa.value=="1")

	{
		if (form.inputb.value=="2")

		{
			if (form.inputc.value=="3")

			{
				if (form.inputd.value=="4")

				{
					if (form.inpute.value=="5")

					{

						if (form.inputf.value=="6")



							{
								form.response2.value="Correct";
							}


					}
				}
			}
		}
	}
}

function checkanswer(form, answer_string)

	{
		form.display_area.value=(answer_string);
	}