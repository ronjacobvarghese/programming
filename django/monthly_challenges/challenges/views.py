from django.shortcuts import render
from django.http import HttpResponse , HttpResponseNotFound , HttpResponseRedirect

monthly_challenges={
    "january":"Eat no meat for the next month",
    "february":"Walk for atleast 20 minutes every day!",
    "march":"Learn Django for at least 20 minutes everyday",
    "april":"Eat no meat for the next month",
    "may":"Walk for atleast 20 minutes every day!",
    "june":"Learn Django for at least 20 minutes everyday",
    "july":"Eat no meat for the next month",
    "august":"Walk for atleast 20 minutes every day!",
    "september":"Learn Django for at least 20 minutes everyday",
    "october":"Eat no meat for the next month",
    "november":"Walk for atleast 20 minutes every day!",
    "december":"Learn Django for at least 20 minutes everyday",
}

# Create your views here.


def january(request):
    return HttpResponse("This works!")


def february(request):
    return HttpResponse("This doesn't work")

def march(request):
    return HttpResponse("Nope aint gonna happen")

def monthly_challenge(request, month):
    try:
        challenge_text = monthly_challenges[month]
        return HttpResponse(challenge_text)
    except:
        return HttpResponseNotFound("This month is not supported!")

def monthly_challenge_by_number(request,month):
    try:
        months= list(monthly_challenges.keys())
        redirect_month=months[month-1]
        return HttpResponseRedirect("/challenges/"+redirect_month)
    except:
        return HttpResponseNotFound("This month is not supported!")