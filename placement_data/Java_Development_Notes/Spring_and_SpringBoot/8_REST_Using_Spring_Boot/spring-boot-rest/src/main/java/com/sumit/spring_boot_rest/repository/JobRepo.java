package com.sumit.spring_boot_rest.repository;

import com.sumit.spring_boot_rest.model.JobPost;
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
    public JobPost getJob(int postId)
    {
        for(JobPost job:jobs)
        {
            if(job.getPostId()==postId)
            {
                return job;
            }
        }
        return null;
    }

    public void updateJob(JobPost jobPost) {
        for(JobPost job:jobs)
        {
            if(job.getPostId()==jobPost.getPostId())
            {
                job.setPostProfile(jobPost.getPostProfile());
                job.setPostDesc(jobPost.getPostDesc());
                job.setReqExperience(jobPost.getReqExperience());
                job.setPostTechStack(jobPost.getPostTechStack());

            }
        }
    }

    public void deleteJob(int postId) {
        for(JobPost job:jobs)
        {
            if(job.getPostId()==postId)
            {
                jobs.remove(job);
            }
        }
    }
}
