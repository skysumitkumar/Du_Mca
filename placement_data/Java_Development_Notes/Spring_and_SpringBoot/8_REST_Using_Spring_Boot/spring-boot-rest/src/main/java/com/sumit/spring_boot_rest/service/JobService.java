package com.sumit.spring_boot_rest.service;

import com.sumit.spring_boot_rest.model.JobPost;
import com.sumit.spring_boot_rest.repository.JobRepo;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;
@Service
public class JobService {

    @Autowired
    private JobRepo repo;
    public void addJob(JobPost jobPost)
    {
        repo.addJob(jobPost);
    }
    public List<JobPost> getAllJobs()
    {
        return repo.getAllJobs();
    }

    public JobPost getJob(int i) {
        return repo.getJob(i);
    }

    public void updateJob(JobPost jobPost) {
        repo.updateJob(jobPost);
    }

    public void deleteJob(int postId) {
        repo.deleteJob(postId);
    }
}
