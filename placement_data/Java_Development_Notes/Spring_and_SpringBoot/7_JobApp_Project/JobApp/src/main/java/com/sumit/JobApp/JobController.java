package com.sumit.JobApp;

import com.sumit.JobApp.model.JobPost;
import com.sumit.JobApp.service.JobService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.servlet.ModelAndView;

import java.util.List;

@Controller
public class JobController {

    //here we make this reference so we can pass data to the service in the handleForm method
    @Autowired
    private JobService service;

    //this url is hit when you go to "/" or "home"
    @RequestMapping({"/","home"})
    public String home()
    {
        return "home";
    }

    //here we have get request so we map it to Getmapping
    @GetMapping("addjob")
    public String addJob()
    {
        return "addjob";
    }

    //here we have post request so we map it to Getmapping
    @PostMapping("handleForm")
    //or
    //@RequestMapping("handleForm","Post")
    //here jobPost is the DTO (data transfer object)
    public String handleForm(JobPost jobPost)
    {
        //here we send the data to the service
        service.addJob(jobPost);
        return "success";
    }

    @GetMapping("viewalljobs")
    public String viewJobs(Model model)
    {
        List<JobPost> jobs=service.getAllJobs();
        //here we send the data to the viewalljobs page with the help of model
        model.addAttribute("jobPosts",jobs);
        return "viewalljobs";
    }
}
