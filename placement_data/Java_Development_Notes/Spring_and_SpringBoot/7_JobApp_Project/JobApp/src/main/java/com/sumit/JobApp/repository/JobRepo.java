package com.sumit.JobApp.repository;

import com.sumit.JobApp.model.JobPost;
import org.springframework.stereotype.Repository;

import java.util.ArrayList;
import java.util.List;

@Repository
public class JobRepo {

    List<JobPost> jobs=new ArrayList<>();
    public List<JobPost> getAllJobs()
    {
        return jobs;
    }
    public void addJob(JobPost job)
    {
        jobs.add(job);
        System.out.println(job);
    }
}
